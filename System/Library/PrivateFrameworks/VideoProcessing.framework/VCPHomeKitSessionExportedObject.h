/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:23 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VCPHomeKitAnalysisSessionClientProtocol.h>

@class VCPHomeKitAnalysisSession;

@interface VCPHomeKitSessionExportedObject : NSObject <VCPHomeKitAnalysisSessionClientProtocol> {

	VCPHomeKitAnalysisSession* _weakSession;

}

@property (assign,nonatomic,__weak) VCPHomeKitAnalysisSession * weakSession;              //@synthesize weakSession=_weakSession - In the implementation block
-(void)setWeakSession:(VCPHomeKitAnalysisSession *)arg1 ;
-(void)processResults:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(VCPHomeKitAnalysisSession *)weakSession;
@end

