/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:01 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSTextCheckingResult, NSString;

@interface PRRecordedCorrection : NSObject {

	NSTextCheckingResult* _correctionResult;
	NSString* _correctedString;
	BOOL _hasRecordedResponse;

}

@property (assign) BOOL hasRecordedResponse;              //@synthesize hasRecordedResponse=_hasRecordedResponse - In the implementation block
-(id)description;
-(void)dealloc;
-(id)initWithCorrectionResult:(id)arg1 correctedString:(id)arg2 ;
-(id)correctionResult;
-(id)correctedString;
-(BOOL)hasRecordedResponse;
-(void)setHasRecordedResponse:(BOOL)arg1 ;
@end
