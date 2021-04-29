/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class JSManagedValue;

@interface _IKDOMNodeEventListener : NSObject {

	BOOL _enabled;
	JSManagedValue* _managedValue;

}

@property (nonatomic,retain) JSManagedValue * managedValue;              //@synthesize managedValue=_managedValue - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(id)value;
-(BOOL)isEnabled;
-(JSManagedValue *)managedValue;
-(id)initWithListener:(id)arg1 forNode:(id)arg2 ;
-(void)setManagedValue:(JSManagedValue *)arg1 ;
@end

