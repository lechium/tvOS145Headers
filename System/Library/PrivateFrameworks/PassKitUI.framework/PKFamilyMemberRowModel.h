/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PKFamilyMember, UIImage, NSString;


@protocol PKFamilyMemberRowModel <NSObject>
@property (nonatomic,readonly) PKFamilyMember * familyMember; 
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) NSString * titleText; 
@property (nonatomic,readonly) NSString * detailText; 
@required
-(long long)compare:(id)arg1;
-(long long)accessoryType;
-(UIImage *)image;
-(void)setImage:(id)arg1;
-(NSString *)titleText;
-(id)initWithFamilyMember:(id)arg1;
-(NSString *)detailText;
-(long long)cellStyle;
-(PKFamilyMember *)familyMember;

@end
