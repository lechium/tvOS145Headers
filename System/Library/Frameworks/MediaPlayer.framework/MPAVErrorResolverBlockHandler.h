/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPAVErrorResolverDelegate.h>

@class MPAVErrorResolver, NSString;

@interface MPAVErrorResolverBlockHandler : NSObject <MPAVErrorResolverDelegate> {

	MPAVErrorResolverBlockHandler* _strongSelf;
	MPAVErrorResolver* _errorResolver;
	/*^block*/id _resolutionHandler;

}

@property (nonatomic,readonly) MPAVErrorResolver * errorResolver;              //@synthesize errorResolver=_errorResolver - In the implementation block
@property (nonatomic,copy) id resolutionHandler;                               //@synthesize resolutionHandler=_resolutionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)errorResolver:(id)arg1 didResolveError:(id)arg2 withResolution:(long long)arg3 ;
-(id)initWithErrorResolver:(id)arg1 ;
-(void)resolveError:(id)arg1 ;
-(MPAVErrorResolver *)errorResolver;
-(id)resolutionHandler;
-(void)setResolutionHandler:(id)arg1 ;
@end

