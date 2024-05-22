#include <limits>
#include <vector>

class IStatistics {
public:
	virtual ~IStatistics() {}

	virtual void update(double next) = 0;
	virtual double getValue() const = 0;
	virtual const char* getName() const = 0;
};

class Minimum : public IStatistics {
public:
	Minimum();
	void update(double next) override;
	double getValue() const override;
	const char* getName() const override;
private:
	double _myValue;
};

class Maximum : public IStatistics {
public:
	Maximum();
	void update(double next) override;
	double getValue() const override;
	const char* getName() const override;
private:
	double _myValue;
};

class Mean : public IStatistics {
public:
	Mean();
	void update(double next) override;
	double getValue() const override;
	const char* getName() const override;
private:
	double _mySum;
	unsigned int _myCount;
};

class StandardDeviation : public IStatistics {
public:
	void update(double next) override;
	double getValue() const override;
	const char* getName() const override;
private:
	Mean _myMean;
	std::vector<double> _mySequence;
};

class Quantile : public IStatistics {
public:
	Quantile(unsigned short probability);
	void update(double next) override;
	double getValue() const override;
	const char* getName() const override;
private:
	unsigned short _q;
	std::vector<double> _mySequence;
};