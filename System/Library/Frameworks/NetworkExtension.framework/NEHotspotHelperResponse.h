/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NetworkExtension/NetworkExtension-Structs.h>
@interface NEHotspotHelperResponse : NSObject {

	CNPluginResponseRef _response;

}

@property (assign) CNPluginResponseRef response;              //@synthesize response=_response - In the implementation block
-(id)description;
-(void)dealloc;
-(void)setResponse:(CNPluginResponseRef)arg1 ;
-(CNPluginResponseRef)response;
-(id)initWithResponse:(CNPluginResponseRef)arg1 ;
-(void)setNetworkList:(id)arg1 ;
-(void)setNetwork:(id)arg1 ;
-(void)deliver;
@end

