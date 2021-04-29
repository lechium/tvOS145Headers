/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class SFTrustPolicy, SFRevocationPolicy, NSArray;

@interface SFTrustEvaluator_Ivars : NSObject {

	SFTrustPolicy* trustPolicy;
	SFRevocationPolicy* revocationPolicy;
	NSArray* applicationAnchorCertificates;
	struct {
		unsigned allowCertificateFetching : 1;
		unsigned trustSystemAnchorCertificates : 1;
	}  trustEvaluatorFlags;

}
@end

