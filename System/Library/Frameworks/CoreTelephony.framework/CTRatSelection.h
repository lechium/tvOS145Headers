/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:53 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTRatSelection : NSObject <NSCopying, NSSecureCoding> {

	unsigned char _mask;
	NSString* _selection;
	NSString* _preferred;

}

@property (assign,nonatomic) unsigned char mask;                //@synthesize mask=_mask - In the implementation block
@property (nonatomic,retain) NSString * selection;              //@synthesize selection=_selection - In the implementation block
@property (nonatomic,retain) NSString * preferred;              //@synthesize preferred=_preferred - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)mask;
-(NSString *)selection;
-(NSString *)preferred;
-(void)setMask:(unsigned char)arg1 ;
-(void)setSelection:(NSString *)arg1 ;
-(void)setPreferred:(NSString *)arg1 ;
@end

