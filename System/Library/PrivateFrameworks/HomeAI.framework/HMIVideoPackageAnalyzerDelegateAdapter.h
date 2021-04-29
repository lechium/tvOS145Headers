/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoPackageAnalyzerDelegate.h>

@interface HMIVideoPackageAnalyzerDelegateAdapter : HMFObject <HMIVideoPackageAnalyzerDelegate> {

	/*^block*/id _packageAnalyzerDidDetectPackages;

}

@property (copy) id packageAnalyzerDidDetectPackages;              //@synthesize packageAnalyzerDidDetectPackages=_packageAnalyzerDidDetectPackages - In the implementation block
-(void)packageAnalyzer:(id)arg1 didDetectPackages:(id)arg2 error:(id)arg3 ;
-(id)packageAnalyzerDidDetectPackages;
-(void)setPackageAnalyzerDidDetectPackages:(id)arg1 ;
@end

