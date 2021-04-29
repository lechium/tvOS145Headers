/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:49 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ANSenderContext : NSObject {

	BOOL _isValidDevice;
	NSString* _senderCorrelationIdentifier;

}

@property (nonatomic,retain) NSString * senderCorrelationIdentifier;              //@synthesize senderCorrelationIdentifier=_senderCorrelationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL isValidDevice;                                  //@synthesize isValidDevice=_isValidDevice - In the implementation block
-(id)description;
-(void)setSenderCorrelationIdentifier:(NSString *)arg1 ;
-(NSString *)senderCorrelationIdentifier;
-(BOOL)isValidDevice;
-(void)setIsValidDevice:(BOOL)arg1 ;
@end

