/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSNumber;

@interface MCChaperonePayload : MCPayload {

	NSData* _pairingCertificateData;
	BOOL _nonChaperonePairingAllowed;
	NSNumber* _nonChaperonePairingAllowedNum;

}

@property (nonatomic,readonly) NSNumber * nonChaperonePairingAllowedNum;              //@synthesize nonChaperonePairingAllowedNum=_nonChaperonePairingAllowedNum - In the implementation block
@property (nonatomic,retain,readonly) NSData * pairingCertificateData;                //@synthesize pairingCertificateData=_pairingCertificateData - In the implementation block
@property (nonatomic,readonly) BOOL nonChaperonePairingAllowed;                       //@synthesize nonChaperonePairingAllowed=_nonChaperonePairingAllowed - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(id)verboseDescription;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(NSData *)pairingCertificateData;
-(BOOL)nonChaperonePairingAllowed;
-(NSNumber *)nonChaperonePairingAllowedNum;
@end

