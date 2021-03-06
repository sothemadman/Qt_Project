#include "qkeyboard.h"

QKeyBoard::QKeyBoard(QWidget *parent, Qt::WFlags flags)
: QWidget(parent, flags)
{
	ui.setupUi(this);
}

QKeyBoard::~QKeyBoard()
{

}

void QKeyBoard::keyPressEvent(QKeyEvent *event){
	switch(event->key()){
		case Qt::Key_Escape:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_press->append("Key_Escape Press");
			}
			break;
		case Qt::Key_Tab:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_press->append("Key_Tab Press");
			}
			break;
		case Qt::Key_Enter:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_press->append("Key_Enter Press");
			}
			break;
		case Qt::Key_Delete:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_press->append("Key_Delete Press");
			}
			break;
		case Qt::Key_Space:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_press->append("Key_Space Press");
			}
			break;
		case Qt::Key_Left:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_press->append("Key_Left Press");
			}
			break;
		case Qt::Key_Up:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_press->append("Key_Up Press");
			}
			break;
		case Qt::Key_Right:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_press->append("Key_Right Press");
			}
			break;
		case Qt::Key_Down:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_press->append("Key_Down Press");
			}
			break;
			/*default:
			this->ui.textEdit->append("KeyEvent");*/
	}
}

void QKeyBoard::keyReleaseEvent(QKeyEvent *event){
	switch(event->key()){
		case Qt::Key_Escape:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_release->append("Key_Escape Release");
			}
			break;
		case Qt::Key_Tab:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_release->append("Key_Tab Release");
			}
			break;
		case Qt::Key_Enter:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_release->append("Key_Enter Release");
			}
			break;
		case Qt::Key_Delete:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_release->append("Key_Delete Release");
			}
			break;
		case Qt::Key_Space:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_release->append("Key_Space Release");
			}
			break;
		case Qt::Key_Left:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_release->append("Key_Left Release");
			}
			break;
		case Qt::Key_Up:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_release->append("Key_Up Release");
			}
			break;
		case Qt::Key_Right:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_release->append("Key_Right Release");
			}
			break;
		case Qt::Key_Down:
			if(!event->isAutoRepeat()){
				this->ui.textEdit_release->append("Key_Down Release");
			}
			break;
			/*default:
			this->ui.textEdit->append("KeyEvent");*/
	}
}
