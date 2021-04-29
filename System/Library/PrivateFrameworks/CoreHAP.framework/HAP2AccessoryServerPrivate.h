/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HAP2SerializedOperationQueue, NSString;


@protocol HAP2AccessoryServerPrivate <HAP2AccessoryServer>
@property (nonatomic,__weak,readonly) id<HAP2AccessoryServerBrowserPrivate> browser; 
@property (nonatomic,readonly) id<HAP2AccessoryServerControllerPrivate> controller; 
@property (nonatomic,readonly) HAP2SerializedOperationQueue * operationQueue; 
@property (nonatomic,retain) NSString * productData; 
@required
-(HAP2SerializedOperationQueue *)operationQueue;
-(id<HAP2AccessoryServerControllerPrivate>)controller;
-(id<HAP2AccessoryServerBrowserPrivate>)browser;
-(void)setProductData:(id)arg1;
-(NSString *)productData;

@end

