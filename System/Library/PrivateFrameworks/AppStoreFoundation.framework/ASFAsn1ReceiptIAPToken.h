/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:51 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreFoundation.framework/AppStoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ASFAsn1Token, NSString;

@interface ASFAsn1ReceiptIAPToken : NSObject {

	unsigned long long mType;
	unsigned long long mTypeVersion;
	ASFAsn1Token* mContentToken;

}

@property (readonly) ASFAsn1Token * contentToken; 
@property (readonly) unsigned long long integerValue; 
@property (readonly) NSString * stringValue; 
@property (readonly) unsigned long long type; 
@property (readonly) unsigned long long typeVersion; 
+(id)readFromBuffer:(const char*)arg1 ;
-(id)description;
-(NSString *)stringValue;
-(unsigned long long)integerValue;
-(unsigned long long)type;
-(ASFAsn1Token *)contentToken;
-(id)_initWithType:(unsigned long long)arg1 typeVersion:(unsigned long long)arg2 contentToken:(id)arg3 ;
-(unsigned long long)typeVersion;
@end

