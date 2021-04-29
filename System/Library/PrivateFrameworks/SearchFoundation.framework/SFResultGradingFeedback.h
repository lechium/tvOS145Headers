/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFResultFeedback.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SFResultGradingFeedback : SFResultFeedback <NSCopying> {

	unsigned long long _grade;
	NSString* _textFeedback;

}

@property (nonatomic,readonly) unsigned long long grade;              //@synthesize grade=_grade - In the implementation block
@property (nonatomic,copy) NSString * textFeedback;                   //@synthesize textFeedback=_textFeedback - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)grade;
-(id)initWithResult:(id)arg1 grade:(unsigned long long)arg2 textFeedback:(id)arg3 ;
-(id)initWithResult:(id)arg1 grade:(unsigned long long)arg2 ;
-(NSString *)textFeedback;
-(void)setTextFeedback:(NSString *)arg1 ;
@end

