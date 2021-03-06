/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, NSMutableArray, NSString;

@interface HMDWakeConfigurationParameters : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _delimiter;
	NSData* _primaryIdentifier;
	NSMutableArray* _secondaryIdentifier;

}

@property (nonatomic,retain) NSData * delimiter;                                //@synthesize delimiter=_delimiter - In the implementation block
@property (nonatomic,retain) NSData * primaryIdentifier;                        //@synthesize primaryIdentifier=_primaryIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * secondaryIdentifier;              //@synthesize secondaryIdentifier=_secondaryIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSMutableArray *)secondaryIdentifier;
-(NSData *)primaryIdentifier;
-(void)setSecondaryIdentifier:(NSMutableArray *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(void)setDelimiter:(NSData *)arg1 ;
-(void)setPrimaryIdentifier:(NSData *)arg1 ;
-(NSData *)delimiter;
-(id)initWithDelimiter:(id)arg1 primaryIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 ;
@end

