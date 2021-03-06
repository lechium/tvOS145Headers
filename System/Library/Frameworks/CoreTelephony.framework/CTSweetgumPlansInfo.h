/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CTSweetgumPlansInfo : NSObject <NSSecureCoding> {

	NSArray* _planGroups;
	NSString* _morePlansURL;

}

@property (nonatomic,retain) NSArray * planGroups;                 //@synthesize planGroups=_planGroups - In the implementation block
@property (nonatomic,retain) NSString * morePlansURL;              //@synthesize morePlansURL=_morePlansURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)planGroups;
-(NSString *)morePlansURL;
-(void)setPlanGroups:(NSArray *)arg1 ;
-(void)setMorePlansURL:(NSString *)arg1 ;
@end

