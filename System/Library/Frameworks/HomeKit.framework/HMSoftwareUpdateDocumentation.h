/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:40 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMHTMLDocument, HMPlainTextDocument, NSNumber;

@interface HMSoftwareUpdateDocumentation : NSObject <NSSecureCoding> {

	HMHTMLDocument* _releaseNotesSummary;
	HMHTMLDocument* _releaseNotes;
	HMPlainTextDocument* _textReleaseNotes;
	HMHTMLDocument* _licenseAgreement;
	NSNumber* _licenseAgreementVersion;

}

@property (copy,readonly) HMHTMLDocument * releaseNotesSummary;                //@synthesize releaseNotesSummary=_releaseNotesSummary - In the implementation block
@property (copy,readonly) HMHTMLDocument * releaseNotes;                       //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (copy,readonly) HMPlainTextDocument * textReleaseNotes;              //@synthesize textReleaseNotes=_textReleaseNotes - In the implementation block
@property (copy,readonly) HMHTMLDocument * licenseAgreement;                   //@synthesize licenseAgreement=_licenseAgreement - In the implementation block
@property (copy,readonly) NSNumber * licenseAgreementVersion;                  //@synthesize licenseAgreementVersion=_licenseAgreementVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMHTMLDocument *)releaseNotes;
-(id)initWithReleaseNotesSummary:(id)arg1 releaseNotes:(id)arg2 textReleaseNotes:(id)arg3 licenseAgreement:(id)arg4 licenseAgreementVersion:(id)arg5 ;
-(HMHTMLDocument *)releaseNotesSummary;
-(HMPlainTextDocument *)textReleaseNotes;
-(HMHTMLDocument *)licenseAgreement;
-(NSNumber *)licenseAgreementVersion;
@end

