//
//  MessageCell.h
//  GoGreen
//
//  Created by Jordan Rouille on 9/3/13.
//  Copyright (c) 2013 Aidan Melen. All rights reserved.
//

#import <UIKit/UIKit.h>

#define Message_Cell_Type_A @"FORUM"
#define Message_Cell_Type_B @"HELP NEEDED"
#define Message_Cell_Type_C @"TRASH PICKUP"
#define Message_Cell_Type_D @"GENERAL MESSAGE"

@interface MessageCell : UITableViewCell

@property (nonatomic, strong) UIImageView *topBackgroundImage;
@property (nonatomic, strong) UIView *middleBackgroundImage;
@property (nonatomic, strong) UIImageView *bottomBackgroundImage;

@property (nonatomic, strong) UILabel *textContentLabel;

-(id)initWithMessageType:(NSString *)type isBackwards:(BOOL)backwards isFirstCell:(BOOL)first withText:(NSString *)text andResueIdentifier:(NSString *)reuseIdentifier;

@end
