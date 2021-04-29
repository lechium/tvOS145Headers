/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:59 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, NEIKEv2TransportDelegate, NEIKEv2PacketDelegate, NEIKEv2ConfigurationDelegate;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NEIKEv2IKESPI, NSError, NWAddressEndpoint, NEIKEv2IKESAConfiguration, NEIKEv2SessionConfiguration, NEIKEv2IKESAProposal, NSData, NSMutableData, NEIKEv2DHProtocol, NSString, NEIKEv2Identifier, NSArray, NEIKEv2AuthenticationProtocol, NEIKEv2ConfigurationMessage, NEIKEv2EAP, NEIKEv2Transport, NSObject;

@interface NEIKEv2IKESA : NSObject {

	SCD_Union_NE19* _dhECKey;
	BOOL _shouldSendStateUpdate;
	BOOL _isInitiator;
	BOOL _fragmentationSupported;
	BOOL _mobikeSupported;
	BOOL _useNATTraversal;
	BOOL _useTCPEncapsulation;
	BOOL _detectedOutgoingNAT;
	BOOL _detectedIncomingNAT;
	BOOL _isRekeying;
	BOOL _eapInProgress;
	BOOL _peerAuthenticated;
	BOOL _reportShortDPD;
	BOOL _usesPacketDelegate;
	unsigned short _shortDPDCounter;
	NEIKEv2IKESPI* _localSPI;
	NEIKEv2IKESPI* _remoteSPI;
	unsigned long long _state;
	NSError* _error;
	NWAddressEndpoint* _localAddress;
	NWAddressEndpoint* _remoteAddress;
	NEIKEv2IKESAConfiguration* _configuration;
	NEIKEv2SessionConfiguration* _sessionConfiguration;
	NEIKEv2IKESAProposal* _chosenProposal;
	double _lastReceivedDPD;
	NSData* _localNonce;
	NSData* _remoteNonce;
	NSMutableData* _dhPublicKey;
	NSData* _dhRemotePublicKey;
	OpaqueSecDHContextRef _dhContext;
	unsigned long long _dhPublicKeySize;
	NEIKEv2DHProtocol* _remotePreferredDHProtocol;
	NSMutableData* _sKeySeed;
	NSMutableData* _skD;
	NSMutableData* _skAi;
	NSMutableData* _skAr;
	NSMutableData* _skEi;
	NSMutableData* _skEr;
	NSMutableData* _skPi;
	NSMutableData* _skPr;
	NSMutableData* _encryptCryptoCtx;
	NSMutableData* _localCertificateIdentity;
	NSMutableData* _digitalSignatureLocalPrivateKey;
	NSMutableData* _digitalSignatureLocalPublicKey;
	NSMutableData* _digitalSignatureRemotePublicKey;
	NSData* _cookie;
	NSData* _responderCookie2;
	NSData* _initiatorCookie2;
	NSData* _signHashData;
	NSString* _outgoingInterfaceName;
	NSData* _localFirstMessage;
	NSData* _remoteFirstMessage;
	NEIKEv2Identifier* _localIdentifierFromPacket;
	NEIKEv2Identifier* _remoteIdentifierFromPacket;
	unsigned long long _childSAModeFromPacket;
	NSArray* _childSAProposalsFromPacket;
	NEIKEv2AuthenticationProtocol* _authProtocolFromPacket;
	NSData* _authenticationDataFromPacket;
	NEIKEv2ConfigurationMessage* _configMessageFromPacket;
	NSArray* _initiatorTrafficSelectorsFromPacket;
	NSArray* _responderTrafficSelectorsFromPacket;
	NEIKEv2EAP* _eapClient;
	NEIKEv2Transport* _transport;
	NEIKEv2Transport* _natTransport;
	NEIKEv2Transport* _tcpTransport;
	NEIKEv2ConfigurationMessage* _activeConfiguration;
	NSData* _receivedDestinationHash;
	NEIKEv2Identifier* _internalRemoteIdentifier;
	NSMutableData* _fetchedPassword;
	NSMutableData* _fetchedSharedSecret;
	NSObject*<OS_dispatch_queue> _queue;
	id<NEIKEv2TransportDelegate> _transportDelegate;
	/*^block*/id _socketGetBlock;
	id<NEIKEv2PacketDelegate> _packetDelegate;
	id<NEIKEv2ConfigurationDelegate> _configurationDelegate;
	unsigned long long _ikeSessionUniqueIndex;
	unsigned long long _ikeSAUniqueIndex;

}

@property (retain) NEIKEv2IKESAConfiguration * configuration;                                       //@synthesize configuration=_configuration - In the implementation block
@property (retain) NEIKEv2SessionConfiguration * sessionConfiguration;                              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (retain) NEIKEv2Identifier * internalRemoteIdentifier;                                    //@synthesize internalRemoteIdentifier=_internalRemoteIdentifier - In the implementation block
@property (retain) NEIKEv2Transport * transport;                                                    //@synthesize transport=_transport - In the implementation block
@property (retain) NEIKEv2Transport * natTransport;                                                 //@synthesize natTransport=_natTransport - In the implementation block
@property (retain) NEIKEv2Transport * tcpTransport;                                                 //@synthesize tcpTransport=_tcpTransport - In the implementation block
@property (assign) unsigned long long state;                                                        //@synthesize state=_state - In the implementation block
@property (retain) NSError * error;                                                                 //@synthesize error=_error - In the implementation block
@property (assign) BOOL shouldSendStateUpdate;                                                      //@synthesize shouldSendStateUpdate=_shouldSendStateUpdate - In the implementation block
@property (retain) NSMutableData * fetchedPassword;                                                 //@synthesize fetchedPassword=_fetchedPassword - In the implementation block
@property (retain) NSMutableData * fetchedSharedSecret;                                             //@synthesize fetchedSharedSecret=_fetchedSharedSecret - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                              //@synthesize queue=_queue - In the implementation block
@property (__weak) id<NEIKEv2TransportDelegate> transportDelegate;                                  //@synthesize transportDelegate=_transportDelegate - In the implementation block
@property (copy) id socketGetBlock;                                                                 //@synthesize socketGetBlock=_socketGetBlock - In the implementation block
@property (assign) BOOL usesPacketDelegate;                                                         //@synthesize usesPacketDelegate=_usesPacketDelegate - In the implementation block
@property (__weak) id<NEIKEv2PacketDelegate> packetDelegate;                                        //@synthesize packetDelegate=_packetDelegate - In the implementation block
@property (__weak) id<NEIKEv2ConfigurationDelegate> configurationDelegate;                          //@synthesize configurationDelegate=_configurationDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long ikeSessionUniqueIndex;                              //@synthesize ikeSessionUniqueIndex=_ikeSessionUniqueIndex - In the implementation block
@property (assign,nonatomic) unsigned long long ikeSAUniqueIndex;                                   //@synthesize ikeSAUniqueIndex=_ikeSAUniqueIndex - In the implementation block
@property (retain) NEIKEv2IKESPI * localSPI;                                                        //@synthesize localSPI=_localSPI - In the implementation block
@property (retain) NEIKEv2IKESPI * remoteSPI;                                                       //@synthesize remoteSPI=_remoteSPI - In the implementation block
@property (retain) NEIKEv2IKESPI * initiatorSPI; 
@property (retain) NEIKEv2IKESPI * responderSPI; 
@property (assign) BOOL isInitiator;                                                                //@synthesize isInitiator=_isInitiator - In the implementation block
@property (assign) BOOL fragmentationSupported;                                                     //@synthesize fragmentationSupported=_fragmentationSupported - In the implementation block
@property (assign) BOOL mobikeSupported;                                                            //@synthesize mobikeSupported=_mobikeSupported - In the implementation block
@property (assign) BOOL useNATTraversal;                                                            //@synthesize useNATTraversal=_useNATTraversal - In the implementation block
@property (assign) BOOL useTCPEncapsulation;                                                        //@synthesize useTCPEncapsulation=_useTCPEncapsulation - In the implementation block
@property (assign) BOOL detectedOutgoingNAT;                                                        //@synthesize detectedOutgoingNAT=_detectedOutgoingNAT - In the implementation block
@property (assign) BOOL detectedIncomingNAT;                                                        //@synthesize detectedIncomingNAT=_detectedIncomingNAT - In the implementation block
@property (assign) BOOL isRekeying;                                                                 //@synthesize isRekeying=_isRekeying - In the implementation block
@property (assign) BOOL eapInProgress;                                                              //@synthesize eapInProgress=_eapInProgress - In the implementation block
@property (assign) BOOL peerAuthenticated;                                                          //@synthesize peerAuthenticated=_peerAuthenticated - In the implementation block
@property (retain) NWAddressEndpoint * localAddress;                                                //@synthesize localAddress=_localAddress - In the implementation block
@property (retain) NWAddressEndpoint * remoteAddress;                                               //@synthesize remoteAddress=_remoteAddress - In the implementation block
@property (readonly) NWAddressEndpoint * initiatorAddress; 
@property (readonly) NWAddressEndpoint * responderAddress; 
@property (retain) NEIKEv2IKESAProposal * chosenProposal;                                           //@synthesize chosenProposal=_chosenProposal - In the implementation block
@property (nonatomic,readonly) NEIKEv2AuthenticationProtocol * authenticationProtocol; 
@property (assign) double lastReceivedDPD;                                                          //@synthesize lastReceivedDPD=_lastReceivedDPD - In the implementation block
@property (assign) unsigned short shortDPDCounter;                                                  //@synthesize shortDPDCounter=_shortDPDCounter - In the implementation block
@property (assign) BOOL reportShortDPD;                                                             //@synthesize reportShortDPD=_reportShortDPD - In the implementation block
@property (retain) NSData * localNonce;                                                             //@synthesize localNonce=_localNonce - In the implementation block
@property (retain) NSData * remoteNonce;                                                            //@synthesize remoteNonce=_remoteNonce - In the implementation block
@property (retain) NSData * initiatorNonce; 
@property (retain) NSData * responderNonce; 
@property (retain) NSMutableData * dhPublicKey;                                                     //@synthesize dhPublicKey=_dhPublicKey - In the implementation block
@property (retain) NSData * dhRemotePublicKey;                                                      //@synthesize dhRemotePublicKey=_dhRemotePublicKey - In the implementation block
@property (assign) OpaqueSecDHContextRef dhContext;                                                 //@synthesize dhContext=_dhContext - In the implementation block
@property (assign) unsigned long long dhPublicKeySize;                                              //@synthesize dhPublicKeySize=_dhPublicKeySize - In the implementation block
@property (readonly) NEIKEv2DHProtocol * preferredDHProtocol; 
@property (retain) NEIKEv2DHProtocol * remotePreferredDHProtocol;                                   //@synthesize remotePreferredDHProtocol=_remotePreferredDHProtocol - In the implementation block
@property (retain) NSMutableData * sKeySeed;                                                        //@synthesize sKeySeed=_sKeySeed - In the implementation block
@property (retain) NSMutableData * skD;                                                             //@synthesize skD=_skD - In the implementation block
@property (retain) NSMutableData * skAi;                                                            //@synthesize skAi=_skAi - In the implementation block
@property (retain) NSMutableData * skAr;                                                            //@synthesize skAr=_skAr - In the implementation block
@property (retain) NSMutableData * skEi;                                                            //@synthesize skEi=_skEi - In the implementation block
@property (retain) NSMutableData * skEr;                                                            //@synthesize skEr=_skEr - In the implementation block
@property (retain) NSMutableData * skPi;                                                            //@synthesize skPi=_skPi - In the implementation block
@property (retain) NSMutableData * skPr;                                                            //@synthesize skPr=_skPr - In the implementation block
@property (readonly) NSData * localIntegrityKey; 
@property (readonly) NSData * remoteIntegrityKey; 
@property (readonly) NSData * encryptionKey; 
@property (readonly) NSData * decryptionKey; 
@property (retain) NSMutableData * encryptCryptoCtx;                                                //@synthesize encryptCryptoCtx=_encryptCryptoCtx - In the implementation block
@property (retain) NSMutableData * localCertificateIdentity;                                        //@synthesize localCertificateIdentity=_localCertificateIdentity - In the implementation block
@property (readonly) NSMutableData * sharedSecret; 
@property (readonly) NSMutableData * password; 
@property (retain) NSMutableData * digitalSignatureLocalPrivateKey;                                 //@synthesize digitalSignatureLocalPrivateKey=_digitalSignatureLocalPrivateKey - In the implementation block
@property (retain) NSMutableData * digitalSignatureLocalPublicKey;                                  //@synthesize digitalSignatureLocalPublicKey=_digitalSignatureLocalPublicKey - In the implementation block
@property (retain) NSMutableData * digitalSignatureRemotePublicKey;                                 //@synthesize digitalSignatureRemotePublicKey=_digitalSignatureRemotePublicKey - In the implementation block
@property (retain) NSData * cookie;                                                                 //@synthesize cookie=_cookie - In the implementation block
@property (retain) NSData * responderCookie2;                                                       //@synthesize responderCookie2=_responderCookie2 - In the implementation block
@property (retain) NSData * initiatorCookie2;                                                       //@synthesize initiatorCookie2=_initiatorCookie2 - In the implementation block
@property (retain) NSData * signHashData;                                                           //@synthesize signHashData=_signHashData - In the implementation block
@property (retain) NSString * outgoingInterfaceName;                                                //@synthesize outgoingInterfaceName=_outgoingInterfaceName - In the implementation block
@property (retain) NSData * initiatorFirstMessage; 
@property (retain) NSData * responderFirstMessage; 
@property (retain) NSData * localFirstMessage;                                                      //@synthesize localFirstMessage=_localFirstMessage - In the implementation block
@property (retain) NSData * remoteFirstMessage;                                                     //@synthesize remoteFirstMessage=_remoteFirstMessage - In the implementation block
@property (nonatomic,readonly) NEIKEv2Identifier * localIdentifier; 
@property (nonatomic,retain) NEIKEv2Identifier * remoteIdentifier; 
@property (nonatomic,retain) NEIKEv2Identifier * localIdentifierFromPacket;                         //@synthesize localIdentifierFromPacket=_localIdentifierFromPacket - In the implementation block
@property (nonatomic,retain) NEIKEv2Identifier * remoteIdentifierFromPacket;                        //@synthesize remoteIdentifierFromPacket=_remoteIdentifierFromPacket - In the implementation block
@property (assign,nonatomic) unsigned long long childSAModeFromPacket;                              //@synthesize childSAModeFromPacket=_childSAModeFromPacket - In the implementation block
@property (nonatomic,retain) NSArray * childSAProposalsFromPacket;                                  //@synthesize childSAProposalsFromPacket=_childSAProposalsFromPacket - In the implementation block
@property (nonatomic,retain) NEIKEv2AuthenticationProtocol * authProtocolFromPacket;                //@synthesize authProtocolFromPacket=_authProtocolFromPacket - In the implementation block
@property (nonatomic,retain) NSData * authenticationDataFromPacket;                                 //@synthesize authenticationDataFromPacket=_authenticationDataFromPacket - In the implementation block
@property (nonatomic,retain) NEIKEv2ConfigurationMessage * configMessageFromPacket;                 //@synthesize configMessageFromPacket=_configMessageFromPacket - In the implementation block
@property (nonatomic,retain) NSArray * initiatorTrafficSelectorsFromPacket;                         //@synthesize initiatorTrafficSelectorsFromPacket=_initiatorTrafficSelectorsFromPacket - In the implementation block
@property (nonatomic,retain) NSArray * responderTrafficSelectorsFromPacket;                         //@synthesize responderTrafficSelectorsFromPacket=_responderTrafficSelectorsFromPacket - In the implementation block
@property (retain) NEIKEv2EAP * eapClient;                                                          //@synthesize eapClient=_eapClient - In the implementation block
@property (readonly) BOOL hasTransport; 
@property (retain) NEIKEv2ConfigurationMessage * activeConfiguration;                               //@synthesize activeConfiguration=_activeConfiguration - In the implementation block
@property (retain) NSData * receivedDestinationHash;                                                //@synthesize receivedDestinationHash=_receivedDestinationHash - In the implementation block
+(id)createAuthenticationDataForSharedSecret:(id)arg1 octets:(id)arg2 prfProtocol:(id)arg3 ;
+(BOOL)checkValidityOfDigitalSignature:(id)arg1 authenticationProtocol:(id)arg2 sessionConfiguration:(id)arg3 remoteSignedOctets:(id)arg4 ;
+(id)copySharedSecretFromConfig:(id)arg1 ;
+(BOOL)checkValidityOfDigitalSignature:(id)arg1 sessionConfiguration:(id)arg2 remoteSignedOctets:(id)arg3 ;
-(id)description;
-(void)dealloc;
-(NSMutableData *)password;
-(NSError *)error;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setCookie:(NSData *)arg1 ;
-(NEIKEv2IKESAConfiguration *)configuration;
-(void)setConfiguration:(NEIKEv2IKESAConfiguration *)arg1 ;
-(NWAddressEndpoint *)localAddress;
-(NWAddressEndpoint *)remoteAddress;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)reset;
-(BOOL)isInitiator;
-(void)setIsInitiator:(BOOL)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)updateConfiguration:(id)arg1 ;
-(NEIKEv2Transport *)transport;
-(void)setTransport:(NEIKEv2Transport *)arg1 ;
-(BOOL)hasTransport;
-(id<NEIKEv2ConfigurationDelegate>)configurationDelegate;
-(void)setConfigurationDelegate:(id<NEIKEv2ConfigurationDelegate>)arg1 ;
-(NSData *)cookie;
-(NSData *)encryptionKey;
-(void)setRemoteIdentifier:(NEIKEv2Identifier *)arg1 ;
-(NSMutableData *)sharedSecret;
-(void)setLocalAddress:(NWAddressEndpoint *)arg1 ;
-(void)setRemoteAddress:(NWAddressEndpoint *)arg1 ;
-(NEIKEv2IKESAProposal *)chosenProposal;
-(NEIKEv2IKESPI *)remoteSPI;
-(void)setChosenProposal:(NEIKEv2IKESAProposal *)arg1 ;
-(void)setShouldSendStateUpdate:(BOOL)arg1 ;
-(NEIKEv2IKESPI *)localSPI;
-(void)setLocalNonce:(NSData *)arg1 ;
-(void)setRemoteNonce:(NSData *)arg1 ;
-(void)setDhPublicKey:(NSMutableData *)arg1 ;
-(void)setDhRemotePublicKey:(NSData *)arg1 ;
-(void)setDhPublicKeySize:(unsigned long long)arg1 ;
-(OpaqueSecDHContextRef)dhContext;
-(void)setDhContext:(OpaqueSecDHContextRef)arg1 ;
-(NSData *)localNonce;
-(NSData *)remoteNonce;
-(void)setState:(unsigned long long)arg1 error:(id)arg2 ;
-(void)sentStateUpdate;
-(void)setInitiatorNonce:(NSData *)arg1 ;
-(NSData *)initiatorNonce;
-(void)setResponderNonce:(NSData *)arg1 ;
-(NSData *)responderNonce;
-(ccec_full_ctx*)dhECPKeyForDesc:(int)arg1 ;
-(unsigned char*)dhCurveKeyForDesc:(int)arg1 ;
-(BOOL)isRekeying;
-(BOOL)shouldSendStateUpdate;
-(NSMutableData *)dhPublicKey;
-(NSData *)dhRemotePublicKey;
-(unsigned long long)dhPublicKeySize;
-(NEIKEv2AuthenticationProtocol *)authenticationProtocol;
-(void)setRemoteSPI:(NEIKEv2IKESPI *)arg1 ;
-(id)copyForRekey;
-(NEIKEv2Identifier *)localIdentifier;
-(NEIKEv2Identifier *)remoteIdentifier;
-(NSString *)outgoingInterfaceName;
-(void)setOutgoingInterfaceName:(NSString *)arg1 ;
-(void)assignRemoteSPI:(id)arg1 ;
-(NEIKEv2DHProtocol *)preferredDHProtocol;
-(NEIKEv2SessionConfiguration *)sessionConfiguration;
-(void)setLocalCertificateIdentity:(NSMutableData *)arg1 ;
-(NSMutableData *)skD;
-(void)setSKeySeed:(NSMutableData *)arg1 ;
-(NSMutableData *)sKeySeed;
-(NEIKEv2IKESPI *)initiatorSPI;
-(NEIKEv2IKESPI *)responderSPI;
-(void)setSkD:(NSMutableData *)arg1 ;
-(void)setSkAi:(NSMutableData *)arg1 ;
-(NSMutableData *)skAi;
-(void)setSkAr:(NSMutableData *)arg1 ;
-(NSMutableData *)skAr;
-(void)setSkEi:(NSMutableData *)arg1 ;
-(NSMutableData *)skEi;
-(void)setSkEr:(NSMutableData *)arg1 ;
-(NSMutableData *)skEr;
-(void)setSkPi:(NSMutableData *)arg1 ;
-(NSMutableData *)skPi;
-(void)setSkPr:(NSMutableData *)arg1 ;
-(NSMutableData *)skPr;
-(void)setEncryptCryptoCtx:(NSMutableData *)arg1 ;
-(NSMutableData *)encryptCryptoCtx;
-(BOOL)generateLocalDHValues;
-(BOOL)generateLocalNonce;
-(BOOL)fetchLocalCertificateIdentity;
-(BOOL)calculateSKEYSEEDForRekey:(id)arg1 ;
-(BOOL)calculateSKEYSEEDDerivatives;
-(id)copyRemoteCertificateAuthorityArray;
-(NSMutableData *)localCertificateIdentity;
-(SecIdentityRef)copyLocalSecIdentity;
-(BOOL)supportsSignHash:(unsigned long long)arg1 ;
-(NSData *)initiatorFirstMessage;
-(NEIKEv2Identifier *)localIdentifierFromPacket;
-(NEIKEv2Identifier *)remoteIdentifierFromPacket;
-(id)copyInitiatorIdentifier;
-(NSData *)responderFirstMessage;
-(id)copyResponderIdentifier;
-(id)createResponderSignedOctets;
-(id)createInitiatorSignedOctets;
-(id)createRemoteSignedOctets;
-(id)createAuthenticationDataForSharedSecret:(id)arg1 octets:(id)arg2 ;
-(id)copyCertSignedData:(id)arg1 ;
-(id)copyDigitalSignatureSignedData:(id)arg1 ;
-(BOOL)checkValidityOfDigitalSignature:(id)arg1 ;
-(id)createResponderAuthenticationData;
-(id)createInitiatorAuthenticationData;
-(NSData *)authenticationDataFromPacket;
-(NEIKEv2AuthenticationProtocol *)authProtocolFromPacket;
-(NEIKEv2EAP *)eapClient;
-(BOOL)generateLocalValues;
-(BOOL)generateAllValuesForRekey:(id)arg1 ;
-(id)copyRemoteCertificateAuthorityDataArray;
-(id)copyRemoteCertificateAuthorityHashData;
-(id)copyLocalCertificateData;
-(BOOL)checkValidityOfCertificates:(id)arg1 signature:(id)arg2 ;
-(BOOL)checkNonCertAuthData:(id)arg1 ;
-(/*^block*/id)copyValidateAuthBlock;
-(id)createInitiatorEAPAuthenticationData;
-(id)createResponderEAPAuthenticationData;
-(void)setPeerAuthenticated:(BOOL)arg1 ;
-(BOOL)mobikeSupported;
-(NSData *)receivedDestinationHash;
-(BOOL)shouldReportShortDPD;
-(BOOL)reportShortDPD;
-(NEIKEv2DHProtocol *)remotePreferredDHProtocol;
-(void)setEapInProgress:(BOOL)arg1 ;
-(id<NEIKEv2PacketDelegate>)packetDelegate;
-(id)copySessionConfig;
-(id)copyChildConfig;
-(void)resetSessionConfiguration:(id)arg1 ;
-(void)setRemoteFirstMessage:(NSData *)arg1 ;
-(void)setIsRekeying:(BOOL)arg1 ;
-(void)resetShortDPDParameters;
-(BOOL)resetRemoteAddress:(id)arg1 ;
-(void)detachTransportWithShouldInvalidate:(BOOL)arg1 ;
-(id)copyTransport;
-(void)resyncAddress;
-(BOOL)peerAuthenticated;
-(void)setActiveConfiguration:(NEIKEv2ConfigurationMessage *)arg1 ;
-(void)setMobikeSupported:(BOOL)arg1 ;
-(void)setEapClient:(NEIKEv2EAP *)arg1 ;
-(void)setRemoteIdentifierFromPacket:(NEIKEv2Identifier *)arg1 ;
-(void)setLocalIdentifierFromPacket:(NEIKEv2Identifier *)arg1 ;
-(void)setChildSAModeFromPacket:(unsigned long long)arg1 ;
-(void)setChildSAProposalsFromPacket:(NSArray *)arg1 ;
-(void)setAuthProtocolFromPacket:(NEIKEv2AuthenticationProtocol *)arg1 ;
-(void)setAuthenticationDataFromPacket:(NSData *)arg1 ;
-(void)setConfigMessageFromPacket:(NEIKEv2ConfigurationMessage *)arg1 ;
-(void)setInitiatorTrafficSelectorsFromPacket:(NSArray *)arg1 ;
-(void)setResponderTrafficSelectorsFromPacket:(NSArray *)arg1 ;
-(unsigned long long)ikeSAUniqueIndex;
-(unsigned long long)ikeSessionUniqueIndex;
-(void)setIkeSAUniqueIndex:(unsigned long long)arg1 ;
-(void)setIkeSessionUniqueIndex:(unsigned long long)arg1 ;
-(void)setSessionConfiguration:(NEIKEv2SessionConfiguration *)arg1 ;
-(void)setTransportDelegate:(id<NEIKEv2TransportDelegate>)arg1 ;
-(void)setSocketGetBlock:(id)arg1 ;
-(void)setPacketDelegate:(id<NEIKEv2PacketDelegate>)arg1 ;
-(void)setUsesPacketDelegate:(BOOL)arg1 ;
-(id)createLocalSPIForLocalAddress:(id)arg1 remoteAddress:(id)arg2 ;
-(void)setLocalSPI:(NEIKEv2IKESPI *)arg1 ;
-(void)setUseTCPEncapsulation:(BOOL)arg1 ;
-(void)setTcpTransport:(NEIKEv2Transport *)arg1 ;
-(NEIKEv2Transport *)tcpTransport;
-(BOOL)shouldReceiveWildcard;
-(void)setUseNATTraversal:(BOOL)arg1 ;
-(void)setNatTransport:(NEIKEv2Transport *)arg1 ;
-(NEIKEv2Transport *)natTransport;
-(NEIKEv2ConfigurationMessage *)configMessageFromPacket;
-(unsigned long long)childSAModeFromPacket;
-(NSArray *)childSAProposalsFromPacket;
-(NSArray *)initiatorTrafficSelectorsFromPacket;
-(NSArray *)responderTrafficSelectorsFromPacket;
-(id<NEIKEv2TransportDelegate>)transportDelegate;
-(id)socketGetBlock;
-(id)initIKESAWithConfiguration:(id)arg1 sessionConfiguration:(id)arg2 queue:(id)arg3 initialTransport:(id)arg4 transportDelegate:(id)arg5 socketGetBlock:(/*^block*/id)arg6 packetDelegate:(id)arg7 configurationDelegate:(id)arg8 ikeSessionUniqueIndex:(unsigned long long)arg9 ;
-(BOOL)usesPacketDelegate;
-(BOOL)useNATTraversal;
-(BOOL)detectedIncomingNAT;
-(void)setDetectedIncomingNAT:(BOOL)arg1 ;
-(BOOL)detectedOutgoingNAT;
-(void)setDetectedOutgoingNAT:(BOOL)arg1 ;
-(NEIKEv2ConfigurationMessage *)activeConfiguration;
-(void)setRemotePreferredDHProtocol:(NEIKEv2DHProtocol *)arg1 ;
-(void)setReceivedDestinationHash:(NSData *)arg1 ;
-(void)setFetchedPassword:(NSMutableData *)arg1 ;
-(void)setFetchedSharedSecret:(NSMutableData *)arg1 ;
-(void)setDigitalSignatureLocalPrivateKey:(NSMutableData *)arg1 ;
-(void)setDigitalSignatureLocalPublicKey:(NSMutableData *)arg1 ;
-(void)setDigitalSignatureRemotePublicKey:(NSMutableData *)arg1 ;
-(void)setLocalFirstMessage:(NSData *)arg1 ;
-(void)setInternalRemoteIdentifier:(NEIKEv2Identifier *)arg1 ;
-(void)disableWildcard;
-(void)assignRemoteSPI:(id)arg1 disableWildCard:(BOOL)arg2 ;
-(BOOL)useTCPEncapsulation;
-(void)setFragmentationSupported:(BOOL)arg1 ;
-(NSData *)signHashData;
-(NSData *)localFirstMessage;
-(NSData *)remoteFirstMessage;
-(NSMutableData *)fetchedPassword;
-(NSMutableData *)fetchedSharedSecret;
-(NEIKEv2Identifier *)internalRemoteIdentifier;
-(double)lastReceivedDPD;
-(unsigned short)shortDPDCounter;
-(void)setShortDPDCounter:(unsigned short)arg1 ;
-(void)setReportShortDPD:(BOOL)arg1 ;
-(void)setLastReceivedDPD:(double)arg1 ;
-(NWAddressEndpoint *)initiatorAddress;
-(NWAddressEndpoint *)responderAddress;
-(void)setInitiatorSPI:(NEIKEv2IKESPI *)arg1 ;
-(void)setResponderSPI:(NEIKEv2IKESPI *)arg1 ;
-(BOOL)switchToNATTraversalPorts;
-(BOOL)switchToTCPEncapsulation;
-(void)setInitiatorFirstMessage:(NSData *)arg1 ;
-(void)setResponderFirstMessage:(NSData *)arg1 ;
-(NSData *)localIntegrityKey;
-(NSData *)remoteIntegrityKey;
-(NSData *)decryptionKey;
-(unsigned long long)dpdRetryIntervalMilliseconds;
-(BOOL)fragmentationSupported;
-(BOOL)eapInProgress;
-(NSMutableData *)digitalSignatureLocalPrivateKey;
-(NSMutableData *)digitalSignatureLocalPublicKey;
-(NSMutableData *)digitalSignatureRemotePublicKey;
-(NSData *)responderCookie2;
-(void)setResponderCookie2:(NSData *)arg1 ;
-(NSData *)initiatorCookie2;
-(void)setInitiatorCookie2:(NSData *)arg1 ;
-(void)setSignHashData:(NSData *)arg1 ;
@end

