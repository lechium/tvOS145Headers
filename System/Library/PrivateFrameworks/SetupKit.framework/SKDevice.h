/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:26 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SetupKit.framework/SetupKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SKDevice : NSObject {

	unsigned short _blePSM;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned short blePSM;              //@synthesize blePSM=_blePSM - In the implementation block
@property (nonatomic,copy) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned short)blePSM;
-(void)setBlePSM:(unsigned short)arg1 ;
@end

