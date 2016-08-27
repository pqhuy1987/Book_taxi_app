/******************************************************************************
 *
 * Copyright (C) 2013 T Dispatch Ltd
 *
 * Licensed under the GPL License, Version 3.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.gnu.org/licenses/gpl-3.0.html
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************
 *
 * @author Marcin Orlowski <marcin.orlowski@webnet.pl>
 *
 ****/

#import <UIKit/UIKit.h>

@protocol LoginProtocolDelegate <NSObject>

- (void)loginFinished:(BOOL)withAccessToken;
- (void)loginFailed:(NSError*)error;

@end

@interface LoginViewController : UIViewController

@property (weak, nonatomic) IBOutlet FlatButton *cancelButton;
@property (weak, nonatomic) IBOutlet FlatButton *loginButton;

@property (unsafe_unretained, nonatomic) id<LoginProtocolDelegate> delegate;
- (IBAction)loginButtonPressed:(id)sender;

- (IBAction)cancelButtonPressed:(id)sender;
@end
