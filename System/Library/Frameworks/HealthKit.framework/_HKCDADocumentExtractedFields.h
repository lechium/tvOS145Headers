/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSString;

@interface _HKCDADocumentExtractedFields : NSObject {

	NSDate* _extractedDate;
	NSString* _extractedTitle;
	NSString* _extractedPatient;
	NSString* _extractedAuthorName;
	NSString* _extractedCustodianName;

}

@property (nonatomic,copy,readonly) NSDate * extractedDate;                         //@synthesize extractedDate=_extractedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * extractedTitle;                      //@synthesize extractedTitle=_extractedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * extractedPatient;                    //@synthesize extractedPatient=_extractedPatient - In the implementation block
@property (nonatomic,copy,readonly) NSString * extractedAuthorName;                 //@synthesize extractedAuthorName=_extractedAuthorName - In the implementation block
@property (nonatomic,copy,readonly) NSString * extractedCustodianName;              //@synthesize extractedCustodianName=_extractedCustodianName - In the implementation block
-(id)initWithDocumentData:(id)arg1 ;
-(NSDate *)extractedDate;
-(NSString *)extractedTitle;
-(NSString *)extractedPatient;
-(NSString *)extractedAuthorName;
-(NSString *)extractedCustodianName;
-(void)extractHeaderFieldsFromDocumentData:(id)arg1 ;
-(id)_firstFrom:(id)arg1 tagRule:(id)arg2 nilOnFail:(BOOL)arg3 ;
-(id)_parseCDADate:(id)arg1 ;
-(id)_personNameFrom:(id)arg1 familyTagRule:(id)arg2 givenTagRule:(id)arg3 nilOnFail:(BOOL)arg4 ;
@end

