/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class INIntent;

@interface INCIntentDefaultValueProvider : NSObject {

	INIntent* _intent;

}

@property (nonatomic,copy,readonly) INIntent * intent;              //@synthesize intent=_intent - In the implementation block
-(INIntent *)intent;
-(id)initWithIntent:(id)arg1 ;
-(void)loadDefaultValuesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadDefaultValuesWithAttributes:(id)arg1 extensionProxy:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)isExpectedDefaultValueError:(id)arg1 ;
@end

