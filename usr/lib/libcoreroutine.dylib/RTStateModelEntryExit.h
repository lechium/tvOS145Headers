/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RTStateModelEntryExit : NSObject <NSSecureCoding> {

	double _entry_s;
	double _exit_s;

}

@property (assign,nonatomic) double entry_s;              //@synthesize entry_s=_entry_s - In the implementation block
@property (assign,nonatomic) double exit_s;               //@synthesize exit_s=_exit_s - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)entry_s;
-(double)exit_s;
-(id)initWithEntry:(double)arg1 exit:(double)arg2 ;
-(void)setEntry_s:(double)arg1 ;
-(void)setExit_s:(double)arg1 ;
@end

