/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AssistantServices/AssistantServices-Structs.h>
@interface AFOneArgumentSafetyBlock : NSObject {

	atomic_flag _hasInvoked;
	/*^block*/id _block;
	id _defaultValue;

}
-(void)dealloc;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 defaultValue:(id)arg2 ;
-(BOOL)invokeWithValue:(id)arg1 ;
@end

