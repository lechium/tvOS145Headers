/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/IDS-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IDSURI, NSDate;

@interface IDSPhoneTemporaryAliasDescription : NSObject <NSSecureCoding, NSCopying> {

	BOOL _selected;
	IDSURI* _URI;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) IDSURI * URI;                         //@synthesize URI=_URI - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) BOOL selected;                        //@synthesize selected=_selected - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(IDSURI *)URI;
-(BOOL)selected;
-(id)initWithURI:(id)arg1 expirationDate:(id)arg2 selected:(BOOL)arg3 ;
@end

