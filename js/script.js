// Предопределенный список слов для угадывания
const wordList = ['JAVASCRIPT', 'HTML', 'CSS', 'PYTHON', 'CODING']

// Загаданное слово
let targetWord = ''

// Массив для хранения угаданных букв
let guessedLetters = []

// Функция для отображения текущего состояния игры
function displayGame() {
	const wordleContainer = document.getElementById('wordle-container')
	wordleContainer.innerHTML = ''

	// Создание блоков для букв
	guessedLetters.forEach((letter, index) => {
		const letterBox = document.createElement('div')
		letterBox.classList.add('letter-box')
		letterBox.textContent = letter
		wordleContainer.appendChild(letterBox)
	})
}

// Функция для проверки угаданной буквы
function checkGuess() {
	const inputElement = document.getElementById('letter-input')
	const guess = inputElement.value.toUpperCase()

	if (guess.length === 1 && /^[A-Z]$/.test(guess)) {
		if (targetWord.includes(guess)) {
			alert('Верное предположение!')
			updateGuessedLetters(guess)
		} else {
			alert('Неверное предположение. Попробуйте еще раз.')
		}
	} else {
		alert('Пожалуйста, введите действительную одну букву.')
	}

	if (guessedLetters.join('') === targetWord) {
		alert('Поздравляем! Вы угадали слово!')
		generateNewWord()
	} else {
		displayGame()
		inputElement.value = ''
	}
}

// Функция для обновления угаданных букв
function updateGuessedLetters(guess) {
	for (let i = 0; i < targetWord.length; i++) {
		if (targetWord[i] === guess) {
			guessedLetters[i] = guess
		}
	}
}

// Функция для генерации нового слова
function generateNewWord() {
	// Выбираем случайное слово из списка
	targetWord = wordList[Math.floor(Math.random() * wordList.length)]

	// Инициализируем массив угаданных букв
	guessedLetters = Array(targetWord.length).fill('_')

	// Отображаем новое слово
	displayGame()
}

// Начальное отображение игры при загрузке страницы
generateNewWord()
