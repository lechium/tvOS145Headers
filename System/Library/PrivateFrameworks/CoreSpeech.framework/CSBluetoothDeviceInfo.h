/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface CSBluetoothDeviceInfo : NSObject {

	BOOL _supportDoAP;
	BOOL _isTemporaryPairedNotInContacts;
	NSString* _address;

}

@property (nonatomic,copy) NSString * address;                                 //@synthesize address=_address - In the implementation block
@property (assign,nonatomic) BOOL supportDoAP;                                 //@synthesize supportDoAP=_supportDoAP - In the implementation block
@property (assign,nonatomic) BOOL isTemporaryPairedNotInContacts;              //@synthesize isTemporaryPairedNotInContacts=_isTemporaryPairedNotInContacts - In the implementation block
-(NSString *)address;
-(void)setAddress:(NSString *)arg1 ;
-(BOOL)supportDoAP;
-(BOOL)isTemporaryPairedNotInContacts;
-(void)setSupportDoAP:(BOOL)arg1 ;
-(void)setIsTemporaryPairedNotInContacts:(BOOL)arg1 ;
@end

