/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:05 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUI/CNAvatarCardActionCell.h>

@class UIImageView;

@interface CNAvatarCardContactCell : CNAvatarCardActionCell {

	UIImageView* _contactImageView;

}

@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
-(void)prepareForReuse;
-(void)reloadData;
-(void)awakeFromNib;
-(void)_updateFonts;
-(BOOL)moreHighlighted;
-(UIImageView *)contactImageView;
-(void)setContactImageView:(UIImageView *)arg1 ;
@end

