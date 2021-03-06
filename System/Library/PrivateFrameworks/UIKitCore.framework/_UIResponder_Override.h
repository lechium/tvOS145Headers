/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class UIResponder;

@interface _UIResponder_Override : NSObject {

	UIResponder* _owner;
	UIResponder* _target;
	long long _types;

}

@property (nonatomic,__weak,readonly) UIResponder * owner;               //@synthesize owner=_owner - In the implementation block
@property (nonatomic,__weak,readonly) UIResponder * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) long long types;                          //@synthesize types=_types - In the implementation block
+(id)overrideForResponder:(id)arg1 withTarget:(id)arg2 forType:(long long)arg3 ;
-(id)description;
-(void)dealloc;
-(UIResponder *)target;
-(UIResponder *)owner;
-(long long)types;
@end

