/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:44 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSUUID, NSString;

@interface SIRINLUUserParse : NSObject <NSSecureCoding> {

	NSArray* _userDialogActs;
	double _probability;
	NSUUID* _nsUUID;
	NSString* _parserId;

}

@property (nonatomic,retain) NSArray * userDialogActs;              //@synthesize userDialogActs=_userDialogActs - In the implementation block
@property (assign,nonatomic) double probability;                    //@synthesize probability=_probability - In the implementation block
@property (nonatomic,retain) NSUUID * nsUUID;                       //@synthesize nsUUID=_nsUUID - In the implementation block
@property (nonatomic,retain) NSString * parserId;                   //@synthesize parserId=_parserId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)probability;
-(void)setProbability:(double)arg1 ;
-(NSArray *)userDialogActs;
-(NSUUID *)nsUUID;
-(NSString *)parserId;
-(id)initWithUserDialogActs:(id)arg1 probability:(double)arg2 nsUUID:(id)arg3 parserId:(id)arg4 ;
-(void)setUserDialogActs:(NSArray *)arg1 ;
-(void)setNsUUID:(NSUUID *)arg1 ;
-(void)setParserId:(NSString *)arg1 ;
@end

