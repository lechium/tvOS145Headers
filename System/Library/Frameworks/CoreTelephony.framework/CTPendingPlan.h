/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CTPlan.h>

@class NSString;

@interface CTPendingPlan : CTPlan {

	NSString* _smdpURL;
	NSString* _matchingID;

}

@property (nonatomic,readonly) NSString * smdpURL;                 //@synthesize smdpURL=_smdpURL - In the implementation block
@property (nonatomic,readonly) NSString * matchingID;              //@synthesize matchingID=_matchingID - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)smdpURL;
-(NSString *)matchingID;
-(id)initWithSmdpURL:(id)arg1 matchingID:(id)arg2 ;
@end

