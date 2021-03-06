//
//  ExponentPMView.h
//  MathFriendzy
//
//  Created by Siddhi-macmini-2 on 31/07/15.
//
//

#import <Foundation/Foundation.h>
#define ExponentPM_plus 1
#define ExponentPM_minus 0

//New file by siddhi infosoft
@interface ExponentPMView : NSObject<UITextFieldDelegate>
{
    UIView *view;
    UIView *upview;
    UIView *downview;
    UIView *line;
}
@property(nonatomic ,retain)UIView *view;
@property(nonatomic ,retain)UITextField *txt;
@property(nonatomic ,retain)UITextField *txt1;
@property(nonatomic ,retain)id delegate;
- (id)initWithFrame:(CGRect)viewFrame andDelegate:(id)delg andOptions:(BOOL)plus_minus andColor:(UIColor*)color;
- (void)textFieldSelected:(UITextField *)textField;

@end
