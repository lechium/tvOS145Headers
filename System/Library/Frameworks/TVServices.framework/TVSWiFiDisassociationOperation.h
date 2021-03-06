/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:21 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_semaphore;
@class TVSWiFiInterface, TVSWiFiNetwork, NSObject;

@interface TVSWiFiDisassociationOperation : NSOperation {

	TVSWiFiInterface* _interface;
	TVSWiFiNetwork* _network;
	NSObject*<OS_dispatch_semaphore> _disassociationSemaphore;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> disassociationSemaphore;              //@synthesize disassociationSemaphore=_disassociationSemaphore - In the implementation block
@property (nonatomic,retain) TVSWiFiInterface * interface;                                          //@synthesize interface=_interface - In the implementation block
@property (nonatomic,retain) TVSWiFiNetwork * network;                                              //@synthesize network=_network - In the implementation block
+(void)initialize;
-(id)init;
-(TVSWiFiInterface *)interface;
-(void)setInterface:(TVSWiFiInterface *)arg1 ;
-(void)main;
-(TVSWiFiNetwork *)network;
-(void)setNetwork:(TVSWiFiNetwork *)arg1 ;
-(void)_disassociate;
-(id)initWithInterface:(id)arg1 network:(id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)disassociationSemaphore;
-(void)setDisassociationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

