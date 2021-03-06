/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDate, NSString;



@interface WBSCreditCardData : NSObject

{

    NSString *_cardName;

    NSString *_cardholderName;

    NSString *_cardNumber;

    NSDate *_expirationDate;

}



@property(copy, nonatomic) NSString *cardName; // @synthesize cardName=_cardName;

@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;

@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;

- (id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)arg1;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;

- (id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4;

- (id)initWithKeychainRepresentation:(id)arg1;

- (id)keychainRepresentation;



@end


