# My IT Way

## 🎯 Current Progress
1. **Пройдено**: [Курс по Bash-навигации](https://ru.hexlet.io/courses/cli-basics)  
2. **Прохожу**: [Курс по C](https://stepik.org/course/3078/info)  
3. **Планирую**: [Курс по Git](https://ru.hexlet.io/courses/intro_to_git)  

## 📚 Читаю
1. "Код. Тайный язык информатики" (Чарльз Петцольд)
2. *[Добавьте следующую книгу здесь]*

---

## ❔ Информация про corsairm

### Личные данные
- **Кампус**: Липецк  
- **Старт обучения**: 04.06.2025  

### Прогресс по направлениям
| Направление          | Прогресс | Статус      |
|-----------------------|----------|-------------|
| Java                 | 0%       | P01 (ожидание) |
| JavaScript Backend   | 0%       | P01 (ожидание) |
| JavaScript Frontend  | 0%       | P01 (ожидание) |
| Go                   | 0%       | P01 (ожидание) |
| DevOps               | 0%       | P01 (ожидание) |
| Cyber Security       | 0%       | P01 (ожидание) |

`-`Задай название машины вида user-1.
`sudo nano /etc/hostname` 

`-`Далее замените указанный в файле hostname на тот, что хотите вы.


`-`Установи временную зону, соответствующую твоему текущему местоположению.
`timedatectl` определить текущую зону
`timedatectl list-timezones` список доступных временных зон
`sudo timedatectl set-timezone Europe/Moscow` установить временную зону
`timedatectl` проверка изменений


`-`Выведи названия сетевых интерфейсов с помощью консольной команды `ip link show/ip -br link` 
<скриншот>

`-` lo (loopback device) – виртуальный интерфейс. Он используется для отладки сетевых программ и запуска серверных приложений на локальной машине. С этим интерфейсом всегда связан адрес 127.0.0.1. У него есть dns-имя – localhost.
Loopback позволяет быстро выявлять неисправности и ошибки в сетевых устройствах и программном обеспечении. Этот метод обратной связи удобен для тестирования сетевых соединений без необходимости наличия физической сети.

`-` Получение IP-адреса от DHCP-сервера `hostname -I`

Расшифровка DHCP (Dynamic Host Configuration Protocol)
DHCP — это протокол, который автоматически назначает устройствам IP-адреса и другие сетевые параметры.

`-`Определи и выведи на экран внешний ip-адрес шлюза (ip) и внутренний IP-адрес шлюза, он же ip-адрес по умолчанию (gw).
`echo "Внутренний GW: $(ip route show default | awk '{print $3}'), Внешний IP: $(curl -s ifconfig.me)"`
(скриншот)

`-`Задай статичные (заданные вручную, а не полученные от DHCP-сервера) настройки ip, gw, dns (используй публичный DNS-серверы, например 1.1.1.1 или 8.8.8.8).


`sudo nano /etc/netplan/01-netcfg.yaml`

network:
  version: 2
  renderer: networkd
  ethernets:
    eth0:
      addresses:
        - 192.168.1.100/24  # Статический IP и маска
      routes:
        - to: default
          via: 192.168.1.1  # Шлюз (Gateway)
      nameservers:
        addresses: [1.1.1.1, 8.8.8.8]  # DNS-серверы

\\подставить свои ip и шлюз (gateway)?????
Примените изменения:
`sudo netplan apply`

`-`Перезагрузи виртуальную машину. Убедись, что статичные сетевые настройки (ip, gw, dns) соответствуют заданным в предыдущем пункте.

Пингуем:

`ping -c 4 1.1.1.1`
`ping -c 4 ya.ru`

(скрин пакеты 0 loss)