/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsynchronousCIImageFilteringRequestInternal, CIImage;

@interface AVAsynchronousCIImageFilteringRequest : NSObject <NSCopying> {

	AVAsynchronousCIImageFilteringRequestInternal* _internal;

}

@property (nonatomic,readonly) CGSize renderSize; 
@property (nonatomic,readonly) SCD_Struct_AV6 compositionTime; 
@property (nonatomic,readonly) CIImage * sourceImage; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)finishWithError:(id)arg1 ;
-(void)finishWithImage:(id)arg1 context:(id)arg2 ;
-(SCD_Struct_AV6)compositionTime;
-(CIImage *)sourceImage;
-(CGSize)renderSize;
-(void)_willDeallocOrFinalize;
-(id)initUsingCompositingRequest:(id)arg1 sourceFrame:(CVBufferRef)arg2 cancellationTest:(/*^block*/id)arg3 defaultCIContextProvider:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end
