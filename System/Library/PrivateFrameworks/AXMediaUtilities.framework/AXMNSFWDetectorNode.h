/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNVYvzEtX1JlUdu8xx5qhDI;

@interface AXMNSFWDetectorNode : AXMEvaluationNode {

	VNVYvzEtX1JlUdu8xx5qhDI* _request;

}
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
+(BOOL)addNSFWResultToContext:(id)arg1 forIdentifier:(id)arg2 confidence:(double)arg3 markAsSensitiveCaptionContent:(BOOL)arg4 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
@end
