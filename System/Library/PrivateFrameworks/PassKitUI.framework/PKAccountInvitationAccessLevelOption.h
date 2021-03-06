/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIImage, NSString;

@interface PKAccountInvitationAccessLevelOption : NSObject {

	UIImage* _image;
	NSString* _title;
	NSString* _subtitle;
	NSString* _secondarySubtitle;
	unsigned long long _accessLevel;

}

@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * secondarySubtitle;                    //@synthesize secondarySubtitle=_secondarySubtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long accessLevel;              //@synthesize accessLevel=_accessLevel - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(unsigned long long)accessLevel;
-(NSString *)secondarySubtitle;
-(void)setSecondarySubtitle:(NSString *)arg1 ;
-(id)initWithAccessLevel:(unsigned long long)arg1 ;
@end

