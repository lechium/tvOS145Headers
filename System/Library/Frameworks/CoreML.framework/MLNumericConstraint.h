/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:58 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSSet;

@interface MLNumericConstraint : NSObject <NSSecureCoding> {

	NSNumber* _minNumber;
	NSNumber* _maxNumber;
	NSSet* _enumeratedNumbers;

}

@property (nonatomic,retain) NSNumber * minNumber;                   //@synthesize minNumber=_minNumber - In the implementation block
@property (nonatomic,retain) NSNumber * maxNumber;                   //@synthesize maxNumber=_maxNumber - In the implementation block
@property (nonatomic,retain) NSSet * enumeratedNumbers;              //@synthesize enumeratedNumbers=_enumeratedNumbers - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)numericConstraintWithMinNumber:(id)arg1 maxNumber:(id)arg2 ;
+(id)numericConstraintWithEnumeratedNumbers:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)minNumber;
-(void)setMinNumber:(NSNumber *)arg1 ;
-(NSNumber *)maxNumber;
-(void)setMaxNumber:(NSNumber *)arg1 ;
-(NSSet *)enumeratedNumbers;
-(void)setEnumeratedNumbers:(NSSet *)arg1 ;
@end

