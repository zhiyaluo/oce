From 9f487ab64d1b5fef14633a06640b68134c110aa3 Mon Sep 17 00:00:00 2001
From: QbProg <tholag@gmail.com>
Date: Wed, 16 May 2012 21:06:28 +0200
Subject: [PATCH] Fixed a bug caused by missing branches. The second
 instruction was executed even if the handle was NULL. Not
 really important since the SendMessage function would fail
 in that case.

---
 src/Draw/MainWindow.cxx |    4 +++-
 1 file changed, 3 insertions(+), 1 deletion(-)

diff --git a/src/Draw/MainWindow.cxx b/src/Draw/MainWindow.cxx
index 3c0f012..d555195 100644
--- a/src/Draw/MainWindow.cxx
+++ b/src/Draw/MainWindow.cxx
@@ -104,8 +104,10 @@ BOOL CommandProc(HWND hWndFrame, WPARAM wParam, LPARAM lParam)
 	{
 	  case IDM_WINDOW_NEXT :
 					if(hWndClient = (HWND)GetWindowLong(hWndFrame, CLIENTWND))
-					  hWndActive = (HWND)SendMessage(hWndClient, WM_MDIGETACTIVE, 0, 0l);
+					{
+						hWndActive = (HWND)SendMessage(hWndClient, WM_MDIGETACTIVE, 0, 0l);
 						SendMessage(hWndClient, WM_MDINEXT, (WPARAM)hWndActive, 0l);  
+					}
 					break;
 
 		case IDM_WINDOW_CASCADE :
-- 
1.7.10.4

