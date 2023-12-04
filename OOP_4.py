import pyautogui
import time


actions_stack = []
# Создание словаря с переназначенными действиями для клавиш
key_mapping = {
    'a': 'left',  # Клавиша 'a' будет эмулировать нажатие клавиши '←'
    'd': 'right', # Клавиша 'd' будет эмулировать нажатие клавиши '→'
    'w': 'up',    # Клавиша 'w' будет эмулировать нажатие клавиши '↑'
    's': 'down',  # Клавиша 's' будет эмулировать нажатие клавиши '↓'
}

# Функция для эмуляции нажатия клавиши
def press_key(key):
    if key in key_mapping:
        pyautogui.press(key_mapping[key])
    else:
        pyautogui.press(key)
    print(f"Pressed key {key}")
    time.sleep(0.5) # Задержка в пол секунды

# Функция для эмуляции нажатия комбинации клавиш
def press_keys(keys):
    for key in keys:
        press_key(key)

# Функция для отката последнего действия
def undo_last_action():
    if len(actions_stack) > 0:
        action_type, action_data = actions_stack.pop()
        if action_type == 'key':
            pyautogui.press('esc') # Эмуляция нажатия клавиши 'esc' для отмены последнего действия
            print("Undo last action")
            time.sleep(0.5) # Задержка в пол секунды

# Пример использования
press_key('a')         # Нажатие клавиши '←'
press_key('b')         # Нажатие клавиши 'b'
press_keys(['a', 'b']) # Нажатие комбинации клавиш '←' и 'b'
undo_last_action()     # Отмена последнего действия (нажатие комбинацииbb клавиш '←' и 'b')
undo_last_action()     # Отмена последнего действия (нажатие клавиши 'b')