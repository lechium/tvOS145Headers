/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVAssetResourceLoadingRequestorInternal;

@interface AVAssetResourceLoadingRequestor : NSObject {

	AVAssetResourceLoadingRequestorInternal* _requestor;

}

@property (nonatomic,readonly) BOOL providesExpiredSessionReports; 
-(void)dealloc;
-(id)initWithRequestInfo:(CFDictionaryRef)arg1 ;
-(BOOL)providesExpiredSessionReports;
@end

