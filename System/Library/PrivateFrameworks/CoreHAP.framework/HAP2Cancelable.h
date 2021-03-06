/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>
#import <libobjc.A.dylib/HAP2Cancelable.h>

@protocol HAP2Cancelable <NSObject>
@required
-(void)cancelWithError:(id)arg1;

@end


@class NSString;

@interface HAP2Cancelable : HAP2LoggingObject <HAP2Cancelable> {

	AB _called;
	/*^block*/id _block;

}

@property (nonatomic,copy) id block;                                //@synthesize block=_block - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(id)ignore;
+(id)cancelableWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(id)block;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(void)setBlock:(id)arg1 ;
@end

