VB6 소스코드중에
반복문 속에

Clipboard.Clear 

를 호출하면 

윈도우10(?) / 윈도우11 OS에서

런타임 오류 521 : 클립보드를 열수 없습니다

라는 오류가 랜덤하게 발생하는 증상

<img src='https://github.com/sigmak/exercise4_01/blob/2023-02-01_vb6_clipboard_clear_solution/521_error.png'>

[해결방법]

출처 : https://community.spiceworks.com/topic/2364444-how-to-clear-the-clipboard-in-vb6

'코드 수정

'아래 소스코드 넣어두고

'Clipboard.Clear  대신 Call clearclipboard 를 사용

Private Declare Function OpenClipboard Lib "user32" (ByVal hwnd As Long) As Long

Private Declare Function EmptyClipboard Lib "user32" () As Long

Private Declare Function CloseClipboard Lib "user32" () As Long

Sub clearclipboard()

  OpenClipboard (0&)

  EmptyClipboard

  CloseClipboard

End Sub
