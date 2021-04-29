/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICellAccessory.h>

@class UIColor;

@interface UICellAccessoryDelete : UICellAccessory {

	/*^block*/id _actionHandler;

}

@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,copy) id actionHandler;                         //@synthesize actionHandler=_actionHandler - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)_identifier;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)actionHandler;
-(void)setActionHandler:(id)arg1 ;
-(long long)_systemType;
-(long long)_systemTypePlacementForHeader:(BOOL)arg1 ;
@end

