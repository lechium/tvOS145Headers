/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:37 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class AVContentKeySession, AVContentKeyReportGroup, NSData, NSDictionary, NSError, NSString, AVContentKeySpecifier, AVContentKey;

@interface AVContentKeyRequestInternal : NSObject {

	AVContentKeySession* session;
	AVContentKeyReportGroup* reportGroup;
	id identifier;
	NSData* keyIDFromInitializationData;
	NSData* initializationData;
	long long status;
	int responseInfoSent;
	BOOL providesPersistableKey;
	NSDictionary* preloadingRequestOptions;
	OpaqueFigCPECryptorRef figCryptor;
	NSError* error;
	CFDictionaryRef requestInfo;
	unsigned long long customURLRequestID;
	OpaqueFigCustomURLHandlerRef customURLHandler;
	BOOL isRenewalRequest;
	NSString* cryptorUUID;
	unsigned long long cryptorKeyRequestID;
	OpaqueFigSimpleMutexRef stateMutex;
	BOOL hasAnyKeyRequestSucceeded;
	AVContentKeySpecifier* contentKeySpecifier;
	AVContentKey* contentKey;

}
@end
