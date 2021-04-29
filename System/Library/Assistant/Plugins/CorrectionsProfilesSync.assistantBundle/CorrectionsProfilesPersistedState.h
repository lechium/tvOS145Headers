/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Assistant/Plugins/CorrectionsProfilesSync.assistantBundle/CorrectionsProfilesSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface CorrectionsProfilesPersistedState : NSObject <NSSecureCoding> {

	NSDictionary* _correctionsProfiles;
	NSString* _digest;

}

@property (nonatomic,retain) NSDictionary * correctionsProfiles;              //@synthesize correctionsProfiles=_correctionsProfiles - In the implementation block
@property (nonatomic,copy) NSString * digest;                                 //@synthesize digest=_digest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)digest;
-(void)setDigest:(NSString *)arg1 ;
-(NSDictionary *)correctionsProfiles;
-(void)setCorrectionsProfiles:(NSDictionary *)arg1 ;
@end
