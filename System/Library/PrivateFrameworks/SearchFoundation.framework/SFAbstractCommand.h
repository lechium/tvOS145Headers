/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:46 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFAbstractCommand.h>
@class SFCommandValue, NSDictionary, NSData;


@protocol SFAbstractCommand <NSObject>
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) SFCommandValue * value; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(int)arg1;
-(int)type;
-(SFCommandValue *)value;
-(void)setValue:(id)arg1;
-(NSDictionary *)dictionaryRepresentation;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFCommandValue, NSDictionary, NSData, NSString;

@interface SFAbstractCommand : NSObject <SFAbstractCommand, NSSecureCoding, NSCopying> {

	SCD_Struct_SF2 _has;
	int _type;
	SFCommandValue* _value;

}

@property (assign,nonatomic) int type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) SFCommandValue * value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)type;
-(SFCommandValue *)value;
-(void)setValue:(SFCommandValue *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(BOOL)hasType;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
@end

