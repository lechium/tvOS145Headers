/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface _PASXPCServer : NSObject {

	NSArray* _XPCListeners;

}
+(id)description;
+(void)registerForService:(id)arg1 delegate:(id)arg2 ;
-(id)init;
-(id)initWithXPCListeners:(id)arg1 logHandle:(id)arg2 ;
-(void)registerXPCListeners;
@end
