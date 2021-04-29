/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ANMessage.h>

@class NSData, NSDictionary, NSString;

@interface ANAnnouncementDataItem : NSObject <NSSecureCoding, ANMessage> {

	unsigned long long _type;
	NSData* _data;
	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long flags;              //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSDictionary * info; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copy;
-(NSString *)description;
-(id)init;
-(unsigned long long)flags;
-(void)setType:(unsigned long long)arg1 ;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(void)setData:(NSData *)arg1 ;
-(id)message;
-(NSDictionary *)info;
-(id)initWithMessage:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)_stringForDataType:(unsigned long long)arg1 ;
-(BOOL)processAudioWithEffects:(unsigned long long)arg1 error:(id*)arg2 ;
@end

