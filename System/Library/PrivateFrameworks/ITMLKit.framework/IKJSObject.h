/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:39 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class IKAppContext, NSMutableDictionary;

@interface IKJSObject : NSObject {

	IKAppContext* _appContext;
	NSMutableDictionary* _managedProperties;

}

@property (nonatomic,retain) NSMutableDictionary * managedProperties;              //@synthesize managedProperties=_managedProperties - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                   //@synthesize appContext=_appContext - In the implementation block
+(void)initialize;
-(id)init;
-(id)invokeMethod:(id)arg1 withArguments:(id)arg2 ;
-(IKAppContext *)appContext;
-(id)initWithAppContext:(id)arg1 ;
-(void)setJSValue:(id)arg1 forProperty:(id)arg2 ;
-(id)jsValueForProperty:(id)arg1 ;
-(NSMutableDictionary *)managedProperties;
-(void)setManagedProperties:(NSMutableDictionary *)arg1 ;
@end

